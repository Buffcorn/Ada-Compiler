-- arRcProc.ada

procedure main is
   a : integer;       --offset is 4
   type aType is array (0..2) of integer;  -- size is 3
   type dateType is record
      month : integer;
      year  : integer;   --could change this to be type aType!
   end record;                             -- size is 2
   arr  : aType;      --offset is 5
   b    : integer;    --offset is 8
   date : dateType;   --offset is 9
   c    : integer;    --offset is 11
                      --size of AR is 12 (4 + 1+3+1+2+1)

   procedure green (x : in out integer) is
   begin
      x := 2;
   end;

   procedure red (y : in aType ) is
   begin
      null;
   end;

begin
   green ( arr(1) );
   green ( date.year );
   red ( arr );
end;
