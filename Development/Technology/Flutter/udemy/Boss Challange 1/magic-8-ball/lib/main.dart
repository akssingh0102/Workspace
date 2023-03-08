import 'package:flutter/material.dart';
import 'dart:math';

void main() => runApp(
      MaterialApp(
        home: magicBall(),
      ),
    );

// State full
class magicBallFull extends StatefulWidget {
  @override
  _magicBallFullState createState() => _magicBallFullState();
}

class _magicBallFullState extends State<magicBallFull> {
  int ballNumber = 1;

  void changeBall() {
    int no = ballNumber;
    ballNumber = Random().nextInt(5) + 1;
    if (ballNumber == no) {
      changeBall();
    }
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Container(
        child: TextButton(
          onPressed: () {
            setState(() {
              changeBall();
            });
          },
          child: Image.asset('images/ball$ballNumber.png'),
        ),
      ),
    );
  }
}

//state less
class magicBall extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.blue.shade600,
      appBar: AppBar(
        backgroundColor: Colors.blue.shade900,
        title: Text(
          'Ask me anything',
        ),
      ),
      body: magicBallFull(),
    );
  }
}
