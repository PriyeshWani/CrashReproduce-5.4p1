using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class textController : MonoBehaviour {

	GameObject test;

	// Use this for initialization
	void Start () {
		test = GameObject.Find ("Boom");
	}
	
	public void PushToText(string str) {
		test.GetComponent<Text> ().text = str;
	}
}
