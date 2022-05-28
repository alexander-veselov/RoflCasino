#pragma once

#include "IEventListener.h"
#include "Display.h"
#include "Platform.h"

#include "../Core/Slot.h"

#include <memory>

class Application : public IEventListener
{
public:
    Application(std::shared_ptr<IPlatform> platform);
    void Handle(Event event) override;
private:
    void OnKeyPressed();
private:
    Slot m_slot;
    std::shared_ptr<IPlatform> m_platform;

    // TODO: extract to separate class
    size_t m_lastWin = 0;
    size_t m_wonTotal = 0;
    size_t m_spentTotal = 0;
};
