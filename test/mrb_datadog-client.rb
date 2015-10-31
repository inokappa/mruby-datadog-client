##
## datadog-client Test
##

assert("DatadogClient#hello") do
  t = DatadogClient.new "hello"
  assert_equal("Say bye", t.hello)
end
