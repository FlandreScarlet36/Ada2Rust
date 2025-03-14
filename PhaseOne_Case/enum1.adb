with Ada.Text_IO; use Ada.Text_IO;

procedure Traffic_Light is
    type Light_Color is (Red, Yellow, Green);
    Current_Light : Light_Color := Red;
begin
    case Current_Light is
        when Red =>
            Put_Line("Stop");
        when Yellow =>
            Put_Line("Caution");
        when Green =>
            Put_Line("Go");
    end case;
end Traffic_Light;