with Ada.Text_IO;
use Ada.Text_IO;

function add(A : Integer; B : Integer) return Integer is
begin
    return A + B;
end add;
procedure function1(A : Integer; B : Integer) is
   A : Integer := 1;
   B : Integer := 2;
   C : Integer := add(A, B);
begin
   Put(C);
end function1;