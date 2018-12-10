#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	shader.load("shadersGL3/shader");

	blob_1.set(ofRandom(960), ofRandom(600));
	vel_1.set(ofRandomf() * 2 - 1, ofRandomf() * 2 - 1);

	blob_2.set(ofRandom(960), ofRandom(600));
	vel_2.set(ofRandomf() * 2 - 1, ofRandomf() * 2 - 1);

	blob_3.set(ofRandom(960), ofRandom(600));
	vel_3.set(ofRandomf() * 2 - 1, ofRandomf() * 2 - 1);

	center.set(ofGetWidth() / 2, ofGetHeight() / 2);

}

//--------------------------------------------------------------
void ofApp::update() {
	ofPoint acc_1 = center - blob_1;
	acc_1.normalize();
	acc_1.scale(0.22);
	vel_1 += acc_1;
	blob_1 += vel_1;

	ofPoint acc_2 = center - blob_2;
	acc_2.normalize();
	acc_2.scale(0.23);
	vel_2 += acc_2;
	blob_2 += vel_2;

	ofPoint acc_3 = center - blob_3;
	acc_3.normalize();
	acc_3.scale(0.27);
	vel_3 += acc_3;
	blob_3 += vel_3;

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(255);

	shader.begin();
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
	shader.setUniform2f("blob_1", blob_1.x, blob_1.y);
	shader.setUniform2f("blob_2", blob_2.x, blob_2.y);
	shader.setUniform2f("blob_3", blob_3.x, blob_3.y);

	shader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}