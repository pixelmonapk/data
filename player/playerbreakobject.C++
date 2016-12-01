// Kills the game object
Destroy (gameObject);

// Removes this script instance from the game object
Destroy (this);

// Removes the rigidbody from the game object
Destroy (rigidbody);

// Kills the game object in 5 seconds after loading the object
Destroy (gameObject, 5);

// When the user presses Ctrl, it will remove the script 
// named FooScript from the game object
void Update () {
    if (Input.GetButton("Break") && GetComponent<FooScript>())
    {
        Destroy (GetComponent<FooScript>());
    }
}
