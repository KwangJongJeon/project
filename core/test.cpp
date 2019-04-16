// example of smartPointer
// #include <memory>
// enum class Kind { circle, triangle, smiley };

// Shape* read_shape(istream& is) // 입력스트림 is에서 도형을 설명하는 정보를 읽음
// {
// 	// ... is에서 도형의 헤더를 읽고, 그 종류 k를 찾음 ...
// 	switch (k) {
// 		case Kind::circle:
// 			// 원의 데이터 {Point, int}를 p와 r에 읽기.
// 			return new Circle{p, r}
// 	}
// 	...
// }


// // 사용할떄
// void user()
// {
// 	std::vector<Shape*> v;
// 	while(cin)
// 		v.push_back(read_shape(cin));
// 	draw_all(v); // 각 요소의 draw() 호출
// 	ratate_all(v, 45); // 각 요소의 rotate(45) 호출
// 	for (auto p : v)
// 		delete p;  // 요소 삭제
// }

// // 스마트 포인터 사용
// class Smiley: public Circle {
// 	//...
// 	private:
// 		vector<unique_ptr<Shape>> eyes; 
// 	    unique_ptr<shape> mouth;
// }


// unique_ptr<Shape> read_shape(istream& is)
// {
// 	switch(k) {
// 		case Kind::circle:
// 		// 원의 데이터 {Point, int}를 p와 r에 읽기.
// 		return unique_ptr<Shape>{new Circle{p, r}};
// 		// ...
// 	}
// }


// void user()
// {
// 	vector<unique_ptr<Shape>> v;
// 	while (cin)
// 		v.push_back(read_shapce(cin));
// 	draw_all(v);
// 	rotate_all(v, 45)
// } // 모든 Shape가 암묵적으로 소멸됨. 