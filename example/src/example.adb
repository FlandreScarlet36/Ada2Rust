with Ada.Text_IO; use Ada.Text_IO;

procedure Constant_Example is
   A : constant Integer := 114;
   B : constant Integer := 514;
begin
   Put_Line("A is: " & Integer'Image(A));
   Put_Line("B is: " & B'Image);
end Constant_Example;