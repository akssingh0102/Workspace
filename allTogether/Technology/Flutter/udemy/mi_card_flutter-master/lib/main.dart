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
            child: Column(
          mainAxisAlignment: MainAxisAlignment.start,
          verticalDirection: VerticalDirection.down,
          crossAxisAlignment: CrossAxisAlignment.end,
          children: [
            Container(
              height: 100,
              width: 100,
              child: Text('Container 1'),
              padding: EdgeInsets.all(10),
              color: Colors.white,
            ),
            Container(
              height: 100,
              width: 100,
              margin: EdgeInsets.all(0),
              child: Text('Container 2'),
              padding: EdgeInsets.all(10),
              color: Colors.amberAccent,
            ),
            Container(
              height: 100,
              width: 100,
              margin: EdgeInsets.all(0),
              child: Text('Container 2'),
              padding: EdgeInsets.all(10),
              color: Colors.red,
            ),
          ],
        )),
      ),
    );
  }
}
