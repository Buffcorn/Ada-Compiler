--nestLoop.ada

procedure main is
        a,b,c:integer;
        type arr is array ( 5 .. 10 ) of integer;
        d: arr;   --d has 6 elements
                  --d's base if not faked is 7
begin
        loop
           a := 5;
           loop
               b := d(7);
               exit when b > a;
           end loop;
           d(5) := 4;
        end loop;  --yes this is an infinite loop
end;               --but your job as compiler is
                   --just to translate
