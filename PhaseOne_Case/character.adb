with Ada.Text_IO; use Ada.Text_IO;

procedure Character_Example is
   C1 : Character;
   C2 : Character;
begin
   C1 := 'A';
   Get(C2);
   Put_Line("Character1 is: " & C1);
   Put_Line("Character2 is: " & C2);
end Character_Example;