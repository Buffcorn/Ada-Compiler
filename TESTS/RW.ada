procedure main is      -- RW.ada
        b, x, a:integer;
        y:boolean;
begin
        read(x);
        y := true;
        write(x+x,y and y);
        read (a);
        b := a * 2;
        write(a, b, a + a, a + b);
end;
