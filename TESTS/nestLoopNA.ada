--nestLoop.ada

procedure main is
        a,b,c:integer;
        d: integer;

begin
        loop
           a := 4 ** b;
        end loop;  --yes this is an infinite loop
end;               --but your job as compiler is
                   --just to translate
