procedure test is
a, b : integer;
c : boolean;

begin
     loop
          a := 4 ** b;
          loop
               exit;
               c := true;
               exit;
          end loop;
          exit when b = a;
          b := a;
     end loop;
     b := 2;
end;
