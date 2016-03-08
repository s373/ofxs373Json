#pragma once

#include "ofMain.h"

#include "ofxs373Json.h"


class ofApp : public ofBaseApp{

	public:




		void setup(){

			JsonBox::Object o;
			o["myName"] = JsonBox::Value(123);
			o["myOtherMember"] = JsonBox::Value("asld\\kfn");
			o["hahaha"] = JsonBox::Value(true);
			o["adamo"] = JsonBox::Value(129.09);
			std::cout << o << std::endl;
			JsonBox::Value v(o);
			v.writeToFile("file.json");

			JsonBox::Array a;
			a.push_back(JsonBox::Value("I'm a string..."));
			a.push_back(JsonBox::Value(123));
			std::cout << a << std::endl;

			JsonBox::Value v2;
			v2.loadFromFile("file.json");
			std::cout << v2 << std::endl;
			v2.writeToStream(std::cout, true, true);
			v2.writeToFile("file.json", false, false);


		}
		void update(){

		}
		void draw(){

		}




};
