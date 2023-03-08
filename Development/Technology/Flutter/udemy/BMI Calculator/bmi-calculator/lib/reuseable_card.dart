import 'package:flutter/material.dart';


class ReuseableCard extends StatelessWidget {
  final Color colour;
  final Widget cardChild;

  ReuseableCard({@required this.colour, this.cardChild});
  @override
  Widget build(BuildContext context) {
    return Container(
      child: cardChild,
      margin: EdgeInsets.all(15),
      decoration: BoxDecoration(
        borderRadius: BorderRadius.circular(15),
        color: Color(0xFF1D1E33),
      ),
    );
  }
}
