import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.teal,
        body: SafeArea(
          child: Row(
            mainAxisAlignment: MainAxisAlignment.start,
            children: [
              Container(
                width: 100,
                height: double.infinity,
                color: Colors.red,
              ),
              Container(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    Container(
                      height: 100,
                      width: 100,
                      color: Colors.yellow,
                    ),
                    Opacity(
                      opacity: 0.5,
                      child: Container(
                        height: 100,
                        width: 100,
                        color: Colors.yellow,
                      ),
                    ),
                  ],
                ),

                // color: Colors.yellow,
                margin: EdgeInsets.symmetric(horizontal: 63),
              ),
              Container(
                width: 100,
                height: double.infinity,
                color: Colors.blue,
              ),
            ],
          ),
        ),
      ),
    );
  }
}

// Container(
//                 height: 845,
//                 width: 100,
//                 color: Colors.red,
//               )
