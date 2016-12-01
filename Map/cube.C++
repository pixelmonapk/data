using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public Cubemap c;
    void Example() {
        if (c != null)
            Debug.Log(obj.format);
        else
            Debug.Log("No cubemap was assigned, please assing one on the inspector.");
    }
}
