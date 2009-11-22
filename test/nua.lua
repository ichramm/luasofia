require "luasofia"

su.init()

home = su.home_new()

root = su.root_create()

nua = nua.create(root, {
        event_handler = function (event, status, phrase)
            print("=> event: " .. event .. " status: " ..
                  status .. " phrase: " .. phrase)
        end })

root:run()

nua:shutdown()

nua = nil

hoot = nil

root = nil

su.deinit()
