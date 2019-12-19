-- mixedNA.ada

procedure fool is
   a : integer;       --offset is 4
   d : integer;       --offset is 5
   b : integer;       --offset is 6
                      --size of AR is 7 (4+1+1+1)
   procedure green is
      c : boolean;    --offset is 4
   begin -- This is a comment.
      a := 5;
      b := -(5+2);
      a := not b;
      c := true;
      write(5,a);
      read(b);
   end;

begin
   a := 5 ** 2;
   loop
      exit;
   end loop;
   if a = b then
      if a = b then
         null;
      end if;
      a := d;
      d := 5;
   end if;
   green;
end;
