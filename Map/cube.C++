using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public Cubemap obj;
    void Example() {
        if (obj != null)
            Debug.Log(obj.format);
        else
            Debug.Log("No cubemap was assigned, please assing one on the inspector.");
    }
}
