--nestElsif2.ada

procedure main is
        a,b:integer;
        c : integer;
begin
        if a = b then
                if b = a then
                        write(a);
                else
                        write(b);
                end if;
        elsif b < a then
                read(a);
                a := 3;
                if true then
                   a := 101;
                   a := 102;
                   if b < 10 then
                      c := 67;
                   else
                      c := 55;
                   end if;
                   a := 103;
                   a := 1014;
                elsif false then
                   b := 201;
                   b := 202;
                   b := 203;
                   b := 2014;
                end if;
        elsif a < b then
                read(b);
        else
                write(a+b);
        end if;

end;
