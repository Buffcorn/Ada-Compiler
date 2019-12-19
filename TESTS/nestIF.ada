-- nestIF.ada

procedure fool is
   a : integer;       --offset is 4
   b : integer;       --offset is 5
   c : boolean;       --offset is 6
                      --size of AR is 7 (4+1+1+1)
begin
   loop
      a := 5;
      exit;
      b := a;
   end loop;
   c := true;
   if a = b then
      b := a + a;
   end if;
   b := 2;
end;
