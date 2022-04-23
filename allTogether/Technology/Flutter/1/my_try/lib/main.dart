import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
        visualDensity: VisualDensity.adaptivePlatformDensity,
      ),
      home: MyAppHome(),
    );
  }
}

class MyAppHome extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Akash'),
        backgroundColor: Colors.cyan[900],
      ),
      body: TextInputWiget(),
    );
  }
}

class TextInputWiget extends StatefulWidget {
  @override
  _TextInputWigetState createState() => _TextInputWigetState();
}

class _TextInputWigetState extends State<TextInputWiget> {
  @override
  Widget build(BuildContext context) {
    return TextField(
      decoration: InputDecoration(
        prefixIcon: Icon(Icons.message),
        labelText: "Input Message",
      ),
    );
  }
}
