pseudoAngle: pseudoAngle.cc Vector3.o
	g++	 pseudoAngle.cc Vector3.o -o pseudoAngle

drawVector: drawVector.cc Vector3.o Color.o
	g++  drawVector.cc  Vector3.o Color.o -o drawVector -lglut -lGL

Segment.o: Segment.cc Segment.hh Vector3.o
	g++ -c Segment.cc Vector3.o -o Segment.o

Color.o: Color.cc Color.hh
	g++ -c Color.cc -o Color.o

Vector3.o: Vector3.cc Vector3.hh
	g++ -c Vector3.cc -o Vector3.o

CollisionShape: CollisionShape.hh  CollisionShape.cc Vector3.o
	g++ CollisionShape.cc Vector3.o -o CollisionShape.o 
	#g++ -c AABBCollisionShape.cc CollisionShape.o Vector3.o -o AABBCollisionShape.o
	#g++ -c CircleCollisionShape.cc CollisionShape.o Vector3.o -o CircleCollisionShape.o

Object: Object.hh Object.cc
	g++ Object.cc CollisionShape.cc Vector3.cc Color.cc -o Object.o -lglut -lGL
	#g++ -c Rectangle.cc CollisionShape.o Vector3.o Color.o  -o Rectangle.o -lglut -lGL
	#g++ -c Circle.cc CollisionShape.o Vector3.o Color.o -o Circle.o -lglut -lGL

Collisions: collisions.cc Object CollisionShape
	g++  collisions.cc Vector3.o Color.o CollisionShape.o Object.o -o collisions -lglut -lGL
