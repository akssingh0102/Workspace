import 'package:flutter/material.dart';
 
void main() {
  runApp(
    MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('I am Rich'),
          backgroundColor: Colors.blueGrey[900],
        ),
        body: Center(
          child: Image(
            image: NetworkImage(
                'https://media.sproutsocial.com/uploads/2017/02/10x-featured-social-media-image-size.png'),
          ),
        ),
        backgroundColor: Colors.white60,
      ),
    ),
  );
}
