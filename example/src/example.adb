procedure case4 is
    procedure Compute_A (V : Natural);
    --  Forward declaration of Compute_A

    procedure Compute_B (V : Natural) is
      begin
         if V > 5 then
            Compute_A (V - 1);
            --  Call to Compute_A
         end if;
      end Compute_B;

    procedure Compute_A (V : Natural) is
      begin
         if V > 2 then
            Compute_B (V - 1);
            --  Call to Compute_B
         end if;
      end Compute_A;

    procedure Compute_C (V : Integer; W : Integer) is
      R : Integer;
      begin
         R := V + W;
      end Compute_C;
    A : Integer := 12;
    B : Integer := 44;
begin
   Compute_A (15);
   Compute_C (A, B);
end case4;