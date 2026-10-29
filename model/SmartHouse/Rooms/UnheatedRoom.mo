within SmartHouse.Rooms;
model UnheatedRoom
  extends PartialRoom;
 annotation (Icon(graphics={Bitmap(
          extent={{-99,-99},{99,99}},
    fileName="modelica://SmartHouse/Images/room.png"), Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200})}), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end UnheatedRoom;
