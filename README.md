## Hash calculator

By eanyx (eanyx123@gmail.com)

V 1.0 - First release - 25 may 2024

Quick hash calculator with gui written in C++/Qt5

- Support MD5, SHA-1, SHA-2 and SHA-3 algorithms.
- Support Linux, Windows and Mac OS X.
- Support 32 and 64 bits architectures.
- Compute hash of file up to 64 GB (need ram)

Need:

For Linux:
	
	Qt 5.15 IDE
	gcc/g++ compilers (64 bits)

For Mac OS X:
	
	Qt 5.15 IDE
	X Code compiler (clang 64 bits)

For Windows:
	
	Qt 5.15 IDE
	MingGW 12 (64 bits)


	QT 5.15 IDE
	MS Visual Studio 19 (64 bits)

Manual Build:

	./qmake
	./make

Launch:

	chmod u+x ./hash_qt_gui
	./hash_qt_gui

