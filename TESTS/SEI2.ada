--SEI2.ada

procedure main is
   x,y:integer;
   z : integer;
begin
        if x = y then
           x := 15;
        elsif true then
           y := 16;
        elsif z then
           y := x;
        else
           y := 17;
        end if;
        z := 42;
end;
