import 'package:flutter/material.dart';
// import 'package:audioplayers/audioplayers.dart';

void main() => runApp(XylophoneApp());

void playAudio(int x) {}

Expanded buttonLayout(int x, Color colorr) {
  return Expanded(
    child: Container(
      color: colorr,
      child: TextButton(
        onPressed: () {
          playAudio(x);
        },
        child: Text(''),
      ),
    ),
  );
}

class XylophoneApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.black,
        body: SafeArea(
          child: Container(
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.stretch,
              children: [
                buttonLayout(1, Colors.red),
                buttonLayout(2, Colors.orange),
                buttonLayout(3, Colors.yellow),
                buttonLayout(4, Colors.green),
                buttonLayout(5, Colors.teal),
                buttonLayout(6, Colors.blue),
                buttonLayout(7, Colors.purple),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
