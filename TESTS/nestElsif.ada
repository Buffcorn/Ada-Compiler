--nestElsif.ada

procedure main is
        a,b:integer;
begin
        if a = b then
                if b = a then
                        write(a);
                elsif b = a then
                        write(b);
                else
                        write(b);
                end if;
        elsif b < a then
                read(a);
        elsif a < b then
                read(b);
        else
                write(a+b);
        end if;
end;
