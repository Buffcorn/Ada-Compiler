--bigLoopNA.ada

procedure main is
        a,b,c:integer;
        d: integer;

begin
    loop
       exit;
       a := 5;
       exit when 6 > a;
       loop
           b := d;
           exit when b > a;
           loop
              c := 4;
              exit;
              c := 8;
              exit;
           end loop;
           if 5 = 4 then
              d := 2;
           end if;
       end loop;
       d := 4;
    end loop;
end;
