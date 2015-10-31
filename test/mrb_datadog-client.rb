##
## datadog-client Test
##

assert("Datadog::Client#hello") do
  t = DatadogClient.new
  assert_equal("Say hello", t.hello("hello"))
end
