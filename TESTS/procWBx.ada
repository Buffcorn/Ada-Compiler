-- procWB.ada
procedure main is --main is 7
   A, B, C  : integer;
   procedure upper is  --upper is 4
   begin
       null;
   end;
   procedure nest is --nest is 5
      bbb : boolean;
      procedure inner is --inner is 6
         X, Y : integer;
         procedure innest is -- innest is 8
            X,C,D,E : integer;
           begin
              A := 5;   -- big walkback to get a's base
              upper;    -- must walkback static links here
           end;
       begin
          innest;
          bbb := true;  --one walkback
       end;
   begin
       bbb := false;  -- local access
       upper;  --call sibling (get caller's static link)
       inner;  --call child
   end;
begin
   nest;
end;
