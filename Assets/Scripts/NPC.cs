using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPC : MonoBehaviour
{
    public Dialog _dialog;

    public void TriggerDialog()
    {
        FindObjectOfType<DialogManager>().StartDialog(_dialog);
    }

    public string GetName()
    {
        return _dialog.name;
    }
}
