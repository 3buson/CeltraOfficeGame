using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Newbie : MonoBehaviour
{
    private GameControls _gameControls;
    private float _jumpHeight = 5f;
    private float _movementSpeed = 5f;

    private GameObject _collidingWith = null;
    [SerializeField] private DialogManager _dialogManager;
    [SerializeField] private GameObject _endGameMessage;

    private AudioClip _laughSound, _startScreenSound, _endScreenSound;
    private AudioSource _audioSource;

    void Awake()
    {
        _gameControls = new GameControls();
    }

    void OnEnable()
    {
        _gameControls.Enable();
    }

    void OnDisable()
    {
        _gameControls.Disable();
    }

    void Start()
    {
        AddControlListeners();
        _audioSource = GetComponent<AudioSource>();
        _laughSound = Resources.Load<AudioClip>("laughSound");
        _startScreenSound = Resources.Load<AudioClip>("startScreen");
        _endScreenSound = Resources.Load<AudioClip>("endScreen");

        _audioSource.PlayOneShot(_startScreenSound);
    }

    void Update()
    {
        Vector3 currentPosition = transform.position;
        currentPosition.x += _gameControls.Newbie.Move.ReadValue<float>() * _movementSpeed * Time.deltaTime;
        transform.position = currentPosition;
    }

    private void OnTriggerEnter2D(Collider2D collider)
    {
        _collidingWith = collider.gameObject;
    }

    private void OnTriggerExit2D(Collider2D other) {
        _collidingWith = null;
    }

    private void AddControlListeners()
    {
        _gameControls.Newbie.Jump.performed += context => Jump();
        _gameControls.Dialog.Open.performed += context => OpenDialog();
        _gameControls.Dialog.Continue.performed += context => ContinueDialog();
        _gameControls.Game.End.performed += context => EndGame();
    }

    private void Jump()
    {
        gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(0, _jumpHeight), ForceMode2D.Impulse);
    }

    private void OpenDialog()
    {
        if (_collidingWith) {
            NPC npcComponent = _collidingWith.GetComponent<NPC>();
            if (npcComponent.GetName() == "Jure") {
                _audioSource.PlayOneShot(_laughSound);
            }
            npcComponent.TriggerDialog();
        }
    }

    private void ContinueDialog()
    {
        _dialogManager.DisplayNextMessage();
    }

    private void EndGame()
    {
        _audioSource.PlayOneShot(_endScreenSound);
        _endGameMessage.SetActive(true);
    }
}
