import 'package:flutter/material.dart';

void main() {
  runApp(
    MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('I am Rich'),
          backgroundColor: Colors.blueGrey[900],
        ),
        backgroundColor: Colors.blueGrey[200],
        body: Center(
          child: Image(
            image: NetworkImage(
                'https://m.economictimes.com/thumb/msid-74722828,width-1200,height-900,resizemode-4,imgsize-133071/diamond.jpg'),
          ),
        ),
      ),
    ),
  );
}
