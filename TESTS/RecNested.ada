-- RecNested.ada
--tests if a compiler can handle nested records
procedure Main is
   type Appointment is record
      Day : Integer;  --offset from appointment is 0
      Time : Integer; --offset from appointment is 1
   end record;      --size is 2

   type ApptList is array (0..4) of Appointment;
   --size is (5*2)=10

   type Schedule is record
      Tasks : ApptList;
      --offset is 0 from schedule's offset
      ATask : Appointment;
      --offset is 10 from schedule's offset
   end record; --size is (10+2) = 12

   NonLocS : Schedule;   --offset is 4
   C       : Integer;    --offset is 16
                         --size of AR is 17 = (4+12+1)
   procedure Other is
      LocalS : Schedule; --offset is 4
      B, C, A :Integer;  --offset for A is 18, size of AR is 19
   begin
      LocalS.ATask.Time := 2200;
      NonLocS.Tasks(3).Time := 800;
      A := 660;
   end;

begin
   C := 360;
   Other;
end;
