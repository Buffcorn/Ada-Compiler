-- procFW.ada
procedure Main is
   procedure Nest is
      procedure Inner is
         procedure Innest is
         begin
            Nest;   -- call grandparent  (needs patch)
            Inner;  -- call parent  (needs patch)
         end;
      begin
         Innest; -- call child
      end;
   begin
      Inner;  -- call child
   end;
   procedure Outer is
   begin
      null;
   end;
begin
   Nest; -- call child
end;
