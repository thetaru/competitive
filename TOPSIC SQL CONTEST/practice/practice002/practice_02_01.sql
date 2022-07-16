select
    district_name as "都道府県名"
  , total_amt as "総人口"
from
    population
where
    lvl = 2
order by
    total_amt desc
;