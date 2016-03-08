
##ofxs373Json

the power of Json Box in openFrameworks.

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

compiled with Json Box 'release-0.6.2' March 2016, 
currently with linux64 & osx libs

##about Json Box

<!-- -*- markdown -*- -->
# Json Box
[JSON](http://json.org/) (JavaScript Object Notation) is a lightweight data-interchange format.

Json Box is a C++ library used to read and write JSON with ease and speed.

Things it does:
* Follows the standards established on [http://json.org/](http://json.org/)
* Read and write JSON in UTF-8
* Uses the STL streams for input and output
* Generated JSON can be indented and pretty or compact and hard-to-read
* Does not crash when the JSON input contains errors, it simply tries to interpret as much as it can

Things it does not do:
* Read JSON in UTF-16 or UTF-32
* Keep the order of the members in objects (the standard doesn't require keeping the order)
* Write useful error messages when the JSON input contains errors

The library wasn't designed with multi-threading in mind.

The class reference can be found [here](http://anhero.github.com/JsonBox).

