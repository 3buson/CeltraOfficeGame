// GENERATED AUTOMATICALLY FROM 'Assets/Scripts/GameControls.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @GameControls : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @GameControls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""GameControls"",
    ""maps"": [
        {
            ""name"": ""Newbie"",
            ""id"": ""231a7f6f-dde9-4498-89fe-585d7c419b51"",
            ""actions"": [
                {
                    ""name"": ""Move"",
                    ""type"": ""Button"",
                    ""id"": ""57adc0d9-0ad4-4ccc-b18d-dc8b2bbf0aa5"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Jump"",
                    ""type"": ""Button"",
                    ""id"": ""3834b0ba-4e25-4158-85f6-72b932d007d3"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": ""arrowKeys"",
                    ""id"": ""45c3b1d5-2942-4cc4-b0e1-519176c382e9"",
                    ""path"": ""1DAxis"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""negative"",
                    ""id"": ""aa7b3508-4664-4b03-8990-d94122f25c18"",
                    ""path"": ""<Keyboard>/leftArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""positive"",
                    ""id"": ""8109dd2d-0d38-40c5-bea6-7a41772cf11a"",
                    ""path"": ""<Keyboard>/rightArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""wasdKeys"",
                    ""id"": ""8287669f-56e9-4482-b499-d84669ff4997"",
                    ""path"": ""1DAxis"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""negative"",
                    ""id"": ""46d9ba84-8571-4894-872e-cccc5911ccfb"",
                    ""path"": ""<Keyboard>/a"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""positive"",
                    ""id"": ""44c1353c-3ed9-4a28-8d16-211e9fc66cb6"",
                    ""path"": ""<Keyboard>/d"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": """",
                    ""id"": ""08a653b4-a06a-4bf7-b015-57be56fd783d"",
                    ""path"": ""<Keyboard>/upArrow"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Jump"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""c8059c59-e16c-4d43-928f-6f2aa5ad6820"",
                    ""path"": ""<Keyboard>/space"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Jump"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        },
        {
            ""name"": ""Dialog"",
            ""id"": ""91fb5db3-9201-487d-adf3-189f3912d14f"",
            ""actions"": [
                {
                    ""name"": ""Continue"",
                    ""type"": ""Button"",
                    ""id"": ""485d25d0-d88a-46c0-a006-e824b0952e8e"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Open"",
                    ""type"": ""Button"",
                    ""id"": ""83ebbb76-8899-4ae1-bb18-58ee778e6e0a"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""8ed69538-16f0-4984-b983-0516b4b37e89"",
                    ""path"": ""<Keyboard>/n"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Continue"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""194b6b95-3af6-4b50-97e2-ed71cd2abeb0"",
                    ""path"": ""<Keyboard>/m"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Open"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        },
        {
            ""name"": ""Game"",
            ""id"": ""5fa2f0b0-20cc-4a40-b5ae-3a89b35cf2c8"",
            ""actions"": [
                {
                    ""name"": ""End"",
                    ""type"": ""Button"",
                    ""id"": ""a5f1660a-a112-4e9c-801e-95d21fcc2994"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""086ef1f3-94fa-4962-8d2d-d1c4de28e94c"",
                    ""path"": ""<Keyboard>/escape"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""End"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
        // Newbie
        m_Newbie = asset.FindActionMap("Newbie", throwIfNotFound: true);
        m_Newbie_Move = m_Newbie.FindAction("Move", throwIfNotFound: true);
        m_Newbie_Jump = m_Newbie.FindAction("Jump", throwIfNotFound: true);
        // Dialog
        m_Dialog = asset.FindActionMap("Dialog", throwIfNotFound: true);
        m_Dialog_Continue = m_Dialog.FindAction("Continue", throwIfNotFound: true);
        m_Dialog_Open = m_Dialog.FindAction("Open", throwIfNotFound: true);
        // Game
        m_Game = asset.FindActionMap("Game", throwIfNotFound: true);
        m_Game_End = m_Game.FindAction("End", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // Newbie
    private readonly InputActionMap m_Newbie;
    private INewbieActions m_NewbieActionsCallbackInterface;
    private readonly InputAction m_Newbie_Move;
    private readonly InputAction m_Newbie_Jump;
    public struct NewbieActions
    {
        private @GameControls m_Wrapper;
        public NewbieActions(@GameControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @Move => m_Wrapper.m_Newbie_Move;
        public InputAction @Jump => m_Wrapper.m_Newbie_Jump;
        public InputActionMap Get() { return m_Wrapper.m_Newbie; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(NewbieActions set) { return set.Get(); }
        public void SetCallbacks(INewbieActions instance)
        {
            if (m_Wrapper.m_NewbieActionsCallbackInterface != null)
            {
                @Move.started -= m_Wrapper.m_NewbieActionsCallbackInterface.OnMove;
                @Move.performed -= m_Wrapper.m_NewbieActionsCallbackInterface.OnMove;
                @Move.canceled -= m_Wrapper.m_NewbieActionsCallbackInterface.OnMove;
                @Jump.started -= m_Wrapper.m_NewbieActionsCallbackInterface.OnJump;
                @Jump.performed -= m_Wrapper.m_NewbieActionsCallbackInterface.OnJump;
                @Jump.canceled -= m_Wrapper.m_NewbieActionsCallbackInterface.OnJump;
            }
            m_Wrapper.m_NewbieActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Move.started += instance.OnMove;
                @Move.performed += instance.OnMove;
                @Move.canceled += instance.OnMove;
                @Jump.started += instance.OnJump;
                @Jump.performed += instance.OnJump;
                @Jump.canceled += instance.OnJump;
            }
        }
    }
    public NewbieActions @Newbie => new NewbieActions(this);

    // Dialog
    private readonly InputActionMap m_Dialog;
    private IDialogActions m_DialogActionsCallbackInterface;
    private readonly InputAction m_Dialog_Continue;
    private readonly InputAction m_Dialog_Open;
    public struct DialogActions
    {
        private @GameControls m_Wrapper;
        public DialogActions(@GameControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @Continue => m_Wrapper.m_Dialog_Continue;
        public InputAction @Open => m_Wrapper.m_Dialog_Open;
        public InputActionMap Get() { return m_Wrapper.m_Dialog; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(DialogActions set) { return set.Get(); }
        public void SetCallbacks(IDialogActions instance)
        {
            if (m_Wrapper.m_DialogActionsCallbackInterface != null)
            {
                @Continue.started -= m_Wrapper.m_DialogActionsCallbackInterface.OnContinue;
                @Continue.performed -= m_Wrapper.m_DialogActionsCallbackInterface.OnContinue;
                @Continue.canceled -= m_Wrapper.m_DialogActionsCallbackInterface.OnContinue;
                @Open.started -= m_Wrapper.m_DialogActionsCallbackInterface.OnOpen;
                @Open.performed -= m_Wrapper.m_DialogActionsCallbackInterface.OnOpen;
                @Open.canceled -= m_Wrapper.m_DialogActionsCallbackInterface.OnOpen;
            }
            m_Wrapper.m_DialogActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Continue.started += instance.OnContinue;
                @Continue.performed += instance.OnContinue;
                @Continue.canceled += instance.OnContinue;
                @Open.started += instance.OnOpen;
                @Open.performed += instance.OnOpen;
                @Open.canceled += instance.OnOpen;
            }
        }
    }
    public DialogActions @Dialog => new DialogActions(this);

    // Game
    private readonly InputActionMap m_Game;
    private IGameActions m_GameActionsCallbackInterface;
    private readonly InputAction m_Game_End;
    public struct GameActions
    {
        private @GameControls m_Wrapper;
        public GameActions(@GameControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @End => m_Wrapper.m_Game_End;
        public InputActionMap Get() { return m_Wrapper.m_Game; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(GameActions set) { return set.Get(); }
        public void SetCallbacks(IGameActions instance)
        {
            if (m_Wrapper.m_GameActionsCallbackInterface != null)
            {
                @End.started -= m_Wrapper.m_GameActionsCallbackInterface.OnEnd;
                @End.performed -= m_Wrapper.m_GameActionsCallbackInterface.OnEnd;
                @End.canceled -= m_Wrapper.m_GameActionsCallbackInterface.OnEnd;
            }
            m_Wrapper.m_GameActionsCallbackInterface = instance;
            if (instance != null)
            {
                @End.started += instance.OnEnd;
                @End.performed += instance.OnEnd;
                @End.canceled += instance.OnEnd;
            }
        }
    }
    public GameActions @Game => new GameActions(this);
    public interface INewbieActions
    {
        void OnMove(InputAction.CallbackContext context);
        void OnJump(InputAction.CallbackContext context);
    }
    public interface IDialogActions
    {
        void OnContinue(InputAction.CallbackContext context);
        void OnOpen(InputAction.CallbackContext context);
    }
    public interface IGameActions
    {
        void OnEnd(InputAction.CallbackContext context);
    }
}
