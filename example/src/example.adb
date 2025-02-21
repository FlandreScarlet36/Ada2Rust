procedure example is
   I : Integer := 1;
begin
   loop
      declare
         Name : constant String := Integer'Image (I) & "Num is: ";
         --               ^ Call to the
         --                 Get_Line function
         NewName : String := "123";

         Str : String := Name & NewName;
      begin
         exit when I = 4;

      end;
      I := I + 1;
      --  Name is undefined here
   end loop;
end example;