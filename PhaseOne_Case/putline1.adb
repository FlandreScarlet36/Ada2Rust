with Ada.Text_IO;
use Ada.Text_IO;

procedure Greet is
    I : Integer := 1;
begin
    loop
        Put_Line ("Hello, World!"
                & I'Image);
        exit when I = 5;
        I := I + 1;
    end loop;
end Greet;