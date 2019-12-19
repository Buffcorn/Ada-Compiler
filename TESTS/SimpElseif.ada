--SimpElseif.ada

procedure main is
        x,y:integer;
begin
        if x = y then
           x := 5;
        elsif y = x then
           y := 6;
        elsif y < x then
           y := x;
        else
           y := 7;
        end if;
end;
