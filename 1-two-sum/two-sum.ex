defmodule Solution do
  @spec two_sum(nums :: [integer], target :: integer) :: [integer]
  def two_sum(nums, target) do
    map = nums
             |> Enum.with_index()
             |> Enum.into(%{})
    result = for i <- 0..(length(nums) - 1) do
        if Map.get(map,target - Enum.at(nums,i)) != nil and Map.get(map,target - Enum.at(nums,i)) != i do
            [i,Map.get(map,target - Enum.at(nums,i)) ]
        end
    end |> Enum.reject(&is_nil/1)
    IO.inspect(result)
    hd(result)
  end
end