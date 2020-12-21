//AbstractPlugin.h
#ifndef AbstractPlugin_INCLUDED
#define AbstractPlugin_INCLUDED
#include <string>

class AbstractPlugin
{
public:
		AbstractPlugin();
		virtual ~AbstractPlugin();
		virtual std::string name() const = 0;
};

AbstractPlugin::AbstractPlugin()
{}
AbstractPlugin::~AbstractPlugin()
{}

#endif // AbstractPlugin.h

