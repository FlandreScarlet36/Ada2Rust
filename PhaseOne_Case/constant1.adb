with Ada.Text_IO; use Ada.Text_IO;

procedure Constant_Example is
   Length : constant Integer := 10;
   Width : constant Integer := 5;
   Area : Integer;
begin
   Area := Length * Width;
   Put_Line("The area of the rectangle is: " & Integer'Image(Area));
end Constant_Example;