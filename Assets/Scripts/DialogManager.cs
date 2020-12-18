using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DialogManager : MonoBehaviour
{
    public TextMeshPro _nameText;
    public TextMeshPro _dialogText;

    private Queue<string> _messages;

    [SerializeField] private GameObject _dialogBox;

    void Start()
    {
        _messages = new Queue<string>();
    }

    public void StartDialog(Dialog dialog)
    {
        _dialogBox.SetActive(true);

        _nameText.text = dialog.name;

        _messages.Clear();

        foreach (string message in dialog._messages) {
            _messages.Enqueue(message);
        }

        DisplayNextMessage();
    }

    public void DisplayNextMessage()
    {
        if (_messages.Count == 0) {
            EndDialog();
            return;
        }

        string message = _messages.Dequeue();
        _dialogText.text = message;
    }

    void EndDialog()
    {
        _dialogBox.SetActive(false);
    }
}
