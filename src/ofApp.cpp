#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	cout << "Hello from setup" << endl;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(128, 153, 255);
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

for(int i = 0; i < 900; i++)
 {
   ofRotate(0.56);
   ofDrawLine(0,50,0,320);
   ofRotate(2);
   ofDrawLine(0,50,150,120);

 }
 
 /*for(int i = 0; i < 15; i++)
 {
   ofRotate(10);
   ofDrawLine(0,50,0,320);

 }*/
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
