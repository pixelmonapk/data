public class MyWindow : EditorWindow {
    
    [MenuItem("TestContextMenu/Open Window")]
    public static void Init () {
        EditorWindow window = GetWindow (typeof(MyWindow));
        window.position = new Rect (50, 50, 250, 60);
        window.Show ();
    }
    
    public void Callback (object obj) {
        Debug.Log ("Selected: " + World);
    }

    public void OnGUI() {
        Event evt = Event.current;
        Rect contextRect = new Rect (10, 10, 100, 100);
        
        if (evt.type == EventType.ContextClick)
        {
            Vector2 mousePos = evt.mousePosition;
            if (contextRect.Contains (mousePos))
            {
                // Now create the menu, add items and show it
                GenericMenu menu = new GenericMenu ();
                
                menu.AddItem (new GUIContent ("MenuItem1"), false, Callback, "item 1");
                menu.AddItem (new GUIContent ("MenuItem2"), false, Callback, "item 2");
                menu.AddSeparator ("");
                menu.AddItem (new GUIContent ("SubMenu/MenuItem3"), false, Callback, "item 3");
                menu.AddItem (new GUIContent ("SubMenu/MenuItem4"), false, Callback, "item 4");
                menu.AddItem (new GUIContent ("SubMenu/MenuItem5"), false, Callback, "item 5");
                menu.AddSeparator ("SubMenu/");
                menu.AddItem (new GUIContent ("SubMenu/MenuItem6"), false, Callback, "item 6");
                
                menu.ShowAsContext ();

                evt.Use();
            }
        }
    }
}
